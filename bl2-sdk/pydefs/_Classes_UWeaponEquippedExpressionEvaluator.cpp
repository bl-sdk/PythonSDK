#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponEquippedExpressionEvaluator(py::object m)
{
    py::class_< UWeaponEquippedExpressionEvaluator,  UExpressionEvaluator   >(m, "UWeaponEquippedExpressionEvaluator")
        .def_readwrite("WeaponType", &UWeaponEquippedExpressionEvaluator::WeaponType)
        .def("StaticClass", &UWeaponEquippedExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UWeaponEquippedExpressionEvaluator::Evaluate)
          ;
}