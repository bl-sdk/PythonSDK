#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNumberWeaponsEquippedExpressionEvaluator(py::module &m)
{
    py::class_< UNumberWeaponsEquippedExpressionEvaluator,  UExpressionEvaluator   >(m, "UNumberWeaponsEquippedExpressionEvaluator")
        .def_readwrite("NumberOfWeapons", &UNumberWeaponsEquippedExpressionEvaluator::NumberOfWeapons)
        .def("Evaluate", &UNumberWeaponsEquippedExpressionEvaluator::Evaluate)
          ;
}