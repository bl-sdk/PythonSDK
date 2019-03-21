#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldBox()
{
    class_< ANxGenericForceFieldBox, bases< ANxGenericForceField >  , boost::noncopyable>("ANxGenericForceFieldBox", no_init)
        .def_readwrite("RenderComponent", &ANxGenericForceFieldBox::RenderComponent)
        .def_readwrite("BoxExtent", &ANxGenericForceFieldBox::BoxExtent)
        .def("StaticClass", &ANxGenericForceFieldBox::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoInitRBPhys", &ANxGenericForceFieldBox::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}