#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponEquippedExpressionEvaluator(py::module &m)
{
    py::class_< UWeaponEquippedExpressionEvaluator,  UExpressionEvaluator   >(m, "UWeaponEquippedExpressionEvaluator")
        .def_readwrite("WeaponType", &UWeaponEquippedExpressionEvaluator::WeaponType)
        .def("Evaluate", &UWeaponEquippedExpressionEvaluator::Evaluate)
          ;
}