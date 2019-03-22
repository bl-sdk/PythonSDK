#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehiclePassengerExpressionEvaluator(py::module &m)
{
    py::class_< UVehiclePassengerExpressionEvaluator,  UExpressionEvaluator   >(m, "UVehiclePassengerExpressionEvaluator")
        .def("Evaluate", &UVehiclePassengerExpressionEvaluator::Evaluate)
          ;
}