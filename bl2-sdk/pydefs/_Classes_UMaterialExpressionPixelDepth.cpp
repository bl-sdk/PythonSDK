#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPixelDepth(py::module &m)
{
    py::class_< UMaterialExpressionPixelDepth,  UMaterialExpression   >(m, "UMaterialExpressionPixelDepth")
          ;
}