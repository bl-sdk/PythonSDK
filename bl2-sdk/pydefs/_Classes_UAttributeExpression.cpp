#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeExpression()
{
    py::class_< UAttributeExpression,  UObject   >("UAttributeExpression")
        .def("StaticClass", &UAttributeExpression::StaticClass, py::return_value_policy::reference)
        .def("SelectAkEvent", &UAttributeExpression::SelectAkEvent, py::return_value_policy::reference)
        .def("SelectSoundCue", &UAttributeExpression::SelectSoundCue, py::return_value_policy::reference)
        .def("EvaluateExpression", &UAttributeExpression::EvaluateExpression)
        .def("EvaluateExpressions", &UAttributeExpression::EvaluateExpressions)
        .staticmethod("StaticClass")
  ;
}