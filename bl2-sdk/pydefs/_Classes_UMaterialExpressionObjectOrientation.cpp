#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectOrientation(py::module &m)
{
    py::class_< UMaterialExpressionObjectOrientation,  UMaterialExpression   >(m, "UMaterialExpressionObjectOrientation")
          ;
}