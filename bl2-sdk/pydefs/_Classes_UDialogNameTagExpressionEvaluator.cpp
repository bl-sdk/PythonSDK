#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDialogNameTagExpressionEvaluator(py::module &m)
{
    py::class_< UDialogNameTagExpressionEvaluator,  UExpressionEvaluator   >(m, "UDialogNameTagExpressionEvaluator")
        .def_readwrite("NameTag", &UDialogNameTagExpressionEvaluator::NameTag)
        .def("Evaluate", &UDialogNameTagExpressionEvaluator::Evaluate)
          ;
}