#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorBurn(py::module &m)
{
    py::class_< UMaterialExpressionzColorBurn,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzColorBurn")
        .def("StaticClass", &UMaterialExpressionzColorBurn::StaticClass, py::return_value_policy::reference)
          ;
}