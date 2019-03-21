#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxAIController()
{
    py::class_< AGearboxAIController,  AAIController   >("AGearboxAIController")
        .def("StaticClass", &AGearboxAIController::StaticClass, py::return_value_policy::reference)
        .def("ForceMoveToActor", &AGearboxAIController::ForceMoveToActor)
        .staticmethod("StaticClass")
  ;
}