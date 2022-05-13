from model.Criterio import Criterio


def seleccionar_opcion(st, criterios_controller):
    st.title("Criterios")
    opcion = st.radio("Tipo de trabajo", ( 'Listar', 'Agregar', 'Editar'))
    if opcion == 'Listar':
        listar_criterio(st, criterios_controller)
    elif opcion == 'Agregar':
        agregar_criterio(st, criterios_controller)
    elif opcion == 'Editar':
        editar_criterio(st, criterios_controller)

def listar_criterio(st, criterios_controller):
    st.subheader( "Lista de criterios" )
    for criterio in criterios_controller.criterios:
        st.subheader( "Nombre: " + criterio.identificador)
        st.write( "Porcentaje ponderacion: " + str(criterio.porcentaje_ponderacion) )
        st.write( "Descripcion: " + criterio.descripcion)

def agregar_criterio(st, criterios_controller):
    st.subheader("Agregar criterio")
    criterio = Criterio( "", "", 0 )
    criterio.identificador = st.text_input(" Digite el identificador del criterio ")
    criterio.descripcion = st.text_input(" Digite una descripcion para el criterio")
    criterio.porcentaje_ponderacion = st.number_input('agregue el porcentaje ponderado del criterio')
    if st.button( "Enviar" ):
        criterios_controller.agregar_criterios( criterio )
        st.success("Tarea exitosa")
    return criterios_controller

def editar_criterio(st, criterios_controller):
    st.subheader( "Editar criterio" )
    lista_criterios = []
    for i in criterios_controller.criterios:
        lista_criterios.append( i.identificador )
    seleccionar_criterio = st.selectbox( "Escoger criterio", lista_criterios )
    for criterios in criterios_controller.criterios:
        if seleccionar_criterio == criterios.identificador:
            criterios.identificador = st.text_input(" Digite el identificador del criterio ", value = criterios.identificador )
            criterios.descripcion = st.text_input(" Digite una descripcion para el criterio", value = criterios.descripcion )
            criterios.porcentaje_ponderacion = st.number_input('agregue el porcentaje ponderado del criterio', value = criterios.porcentaje_ponderacion )
            if st.button("Editar"):
                st.success("Edicion exitosa")