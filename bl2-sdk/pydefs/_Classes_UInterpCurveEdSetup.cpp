#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpCurveEdSetup()
{
    class_< UInterpCurveEdSetup, bases< UObject >  , boost::noncopyable>("UInterpCurveEdSetup", no_init)
        .def_readwrite("Tabs", &UInterpCurveEdSetup::Tabs)
        .def_readwrite("ActiveTab", &UInterpCurveEdSetup::ActiveTab)
        .def("StaticClass", &UInterpCurveEdSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}