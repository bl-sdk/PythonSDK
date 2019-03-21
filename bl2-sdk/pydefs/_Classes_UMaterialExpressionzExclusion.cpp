#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzExclusion(py::object m)
{
    py::class_< UMaterialExpressionzExclusion,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzExclusion")
        .def("StaticClass", &UMaterialExpressionzExclusion::StaticClass, py::return_value_policy::reference)
          ;
}