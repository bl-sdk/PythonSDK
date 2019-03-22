#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog(py::module &m)
{
    py::class_< UMaterialExpressionLog,  UMaterialExpression   >(m, "UMaterialExpressionLog")
        .def_readwrite("Input", &UMaterialExpressionLog::Input)
        .def("StaticClass", &UMaterialExpressionLog::StaticClass, py::return_value_policy::reference)
          ;
}