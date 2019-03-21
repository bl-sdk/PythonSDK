#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveFoliage()
{
    class_< UActorFactoryInteractiveFoliage, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryInteractiveFoliage", no_init)
        .def_readwrite("StaticMesh", &UActorFactoryStaticMesh::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryStaticMesh::DrawScale3D)
        .def("StaticClass", &UActorFactoryInteractiveFoliage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}