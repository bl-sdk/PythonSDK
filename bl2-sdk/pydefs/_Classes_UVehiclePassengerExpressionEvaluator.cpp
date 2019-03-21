#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehiclePassengerExpressionEvaluator()
{
    py::class_< UVehiclePassengerExpressionEvaluator,  UExpressionEvaluator   >("UVehiclePassengerExpressionEvaluator")
        .def("StaticClass", &UVehiclePassengerExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UVehiclePassengerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}