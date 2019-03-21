#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCompound(py::object m)
{
    py::class_< UMaterialExpressionCompound,  UMaterialExpression   >(m, "UMaterialExpressionCompound")
        .def_readwrite("MaterialExpressions", &UMaterialExpressionCompound::MaterialExpressions)
        .def_readwrite("Caption", &UMaterialExpressionCompound::Caption)
        .def("StaticClass", &UMaterialExpressionCompound::StaticClass, py::return_value_policy::reference)
          ;
}