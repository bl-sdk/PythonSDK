#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStaticMeshComponentFactory()
{
    class_< UStaticMeshComponentFactory, bases< UPrimitiveComponentFactory >  , boost::noncopyable>("UStaticMeshComponentFactory", no_init)
        .def_readwrite("StaticMesh", &UStaticMeshComponentFactory::StaticMesh)
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
        .def("StaticClass", &UStaticMeshComponentFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}