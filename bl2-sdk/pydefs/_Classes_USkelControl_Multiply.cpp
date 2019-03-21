#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControl_Multiply()
{
    class_< USkelControl_Multiply, bases< USkelControlBase >  , boost::noncopyable>("USkelControl_Multiply", no_init)
        .def_readwrite("Multiplier", &USkelControl_Multiply::Multiplier)
        .def("StaticClass", &USkelControl_Multiply::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}