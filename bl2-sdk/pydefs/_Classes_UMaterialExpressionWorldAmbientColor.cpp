#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldAmbientColor(py::module &m)
{
    py::class_< UMaterialExpressionWorldAmbientColor,  UMaterialExpression   >(m, "UMaterialExpressionWorldAmbientColor")
          ;
}