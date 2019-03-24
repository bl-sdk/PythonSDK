#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponEquippedExpressionEvaluator(py::module &m)
{
    py::class_< UWeaponEquippedExpressionEvaluator,  UExpressionEvaluator   >(m, "UWeaponEquippedExpressionEvaluator")
		.def_static("StaticClass", &UWeaponEquippedExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WeaponType", &UWeaponEquippedExpressionEvaluator::WeaponType)
        .def("Evaluate", &UWeaponEquippedExpressionEvaluator::Evaluate)
          ;
}