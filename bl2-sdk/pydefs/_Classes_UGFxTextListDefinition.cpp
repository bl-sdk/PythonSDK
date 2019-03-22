#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxTextListDefinition(py::module &m)
{
    py::class_< UGFxTextListDefinition,  UGBXDefinition   >(m, "UGFxTextListDefinition")
        .def_readwrite("ContainerName", &UGFxTextListDefinition::ContainerName)
        .def_readwrite("FunctionPath", &UGFxTextListDefinition::FunctionPath)
        .def_readwrite("MoreUpName", &UGFxTextListDefinition::MoreUpName)
        .def_readwrite("MoreDownName", &UGFxTextListDefinition::MoreDownName)
        .def_readwrite("CategoryPrefix", &UGFxTextListDefinition::CategoryPrefix)
        .def_readwrite("CategoryPostfix", &UGFxTextListDefinition::CategoryPostfix)
        .def_readwrite("CategoryIconLabel", &UGFxTextListDefinition::CategoryIconLabel)
        .def_readwrite("TextNormalColor", &UGFxTextListDefinition::TextNormalColor)
        .def_readwrite("TextHighlightColor", &UGFxTextListDefinition::TextHighlightColor)
        .def_readwrite("InitialEntryCount", &UGFxTextListDefinition::InitialEntryCount)
        .def("StaticClass", &UGFxTextListDefinition::StaticClass, py::return_value_policy::reference)
          ;
}