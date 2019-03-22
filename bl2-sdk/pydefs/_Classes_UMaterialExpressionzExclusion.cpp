#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzExclusion(py::module &m)
{
    py::class_< UMaterialExpressionzExclusion,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzExclusion")
          ;
}