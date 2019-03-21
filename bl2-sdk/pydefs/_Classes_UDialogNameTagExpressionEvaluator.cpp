#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDialogNameTagExpressionEvaluator()
{
    py::class_< UDialogNameTagExpressionEvaluator,  UExpressionEvaluator   >("UDialogNameTagExpressionEvaluator")
        .def_readwrite("NameTag", &UDialogNameTagExpressionEvaluator::NameTag)
        .def("StaticClass", &UDialogNameTagExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UDialogNameTagExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}