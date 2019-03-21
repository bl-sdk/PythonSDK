#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxForceFieldSpawnable()
{
    class_< ANxForceFieldSpawnable, bases< AActor >  , boost::noncopyable>("ANxForceFieldSpawnable", no_init)
        .def_readwrite("ForceFieldComponent", &ANxForceFieldSpawnable::ForceFieldComponent)
        .def("StaticClass", &ANxForceFieldSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ANxForceFieldSpawnable::OnToggle)
        .staticmethod("StaticClass")
  ;
}