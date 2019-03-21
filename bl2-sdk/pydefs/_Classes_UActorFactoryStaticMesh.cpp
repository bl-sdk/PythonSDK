#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryStaticMesh()
{
    class_< UActorFactoryStaticMesh, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryStaticMesh", no_init)
        .def_readwrite("StaticMesh", &UActorFactoryStaticMesh::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryStaticMesh::DrawScale3D)
        .def("StaticClass", &UActorFactoryStaticMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}