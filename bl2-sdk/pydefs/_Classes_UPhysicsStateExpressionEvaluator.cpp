#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsStateExpressionEvaluator(py::object m)
{
    py::class_< UPhysicsStateExpressionEvaluator,  UExpressionEvaluator   >(m, "UPhysicsStateExpressionEvaluator")
        .def_readwrite("PhysicsState", &UPhysicsStateExpressionEvaluator::PhysicsState)
        .def("StaticClass", &UPhysicsStateExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UPhysicsStateExpressionEvaluator::Evaluate)
          ;
}