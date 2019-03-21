#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMeshComponentFactory()
{
    class_< UMeshComponentFactory, bases< UPrimitiveComponentFactory >  , boost::noncopyable>("UMeshComponentFactory", no_init)
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
        .def("StaticClass", &UMeshComponentFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}