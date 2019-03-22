#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestDepth(py::module &m)
{
    py::class_< UMaterialExpressionDestDepth,  UMaterialExpression   >(m, "UMaterialExpressionDestDepth")
          ;
}