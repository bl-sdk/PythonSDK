#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehiclePassengerExpressionEvaluator(py::object m)
{
    py::class_< UVehiclePassengerExpressionEvaluator,  UExpressionEvaluator   >(m, "UVehiclePassengerExpressionEvaluator")
        .def("StaticClass", &UVehiclePassengerExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UVehiclePassengerExpressionEvaluator::Evaluate)
          ;
}