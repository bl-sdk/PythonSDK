#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeExpression()
{
    class_< UAttributeExpression, bases< UObject >  , boost::noncopyable>("UAttributeExpression", no_init)
        .def("StaticClass", &UAttributeExpression::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectAkEvent", &UAttributeExpression::SelectAkEvent, return_value_policy< reference_existing_object >())
        .def("SelectSoundCue", &UAttributeExpression::SelectSoundCue, return_value_policy< reference_existing_object >())
        .def("EvaluateExpression", &UAttributeExpression::EvaluateExpression)
        .def("EvaluateExpressions", &UAttributeExpression::EvaluateExpressions)
        .staticmethod("StaticClass")
  ;
}