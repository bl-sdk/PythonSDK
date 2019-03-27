#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInstancedDesignerAttribute(py::module &m)
{
    py::class_< UInstancedDesignerAttribute,  UObject   >(m, "UInstancedDesignerAttribute")
		.def_static("StaticClass", &UInstancedDesignerAttribute::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Definition", &UInstancedDesignerAttribute::Definition)
        .def_readwrite("AttributeName", &UInstancedDesignerAttribute::AttributeName)
        .def_readwrite("AttributeDataType", &UInstancedDesignerAttribute::AttributeDataType)
        .def_readwrite("Value", &UInstancedDesignerAttribute::Value)
        .def_readwrite("ValueBaseValue", &UInstancedDesignerAttribute::ValueBaseValue)
        .def_readwrite("ValueModifierStack", &UInstancedDesignerAttribute::ValueModifierStack)
        .def_readwrite("IntValue", &UInstancedDesignerAttribute::IntValue)
        .def_readwrite("IntValueBaseValue", &UInstancedDesignerAttribute::IntValueBaseValue)
        .def_readwrite("IntValueModifierStack", &UInstancedDesignerAttribute::IntValueModifierStack)
        .def_readwrite("BoolValue", &UInstancedDesignerAttribute::BoolValue)
        .def_readwrite("BoolValueBaseValue", &UInstancedDesignerAttribute::BoolValueBaseValue)
        .def_readwrite("BoolValueModifierStack", &UInstancedDesignerAttribute::BoolValueModifierStack)
        .def_readwrite("DesignerAttributeDefinitionPathName", &UInstancedDesignerAttribute::DesignerAttributeDefinitionPathName)
        .def("SetBaseValue", &UInstancedDesignerAttribute::SetBaseValue)
        .def("InitializeByName", &UInstancedDesignerAttribute::InitializeByName)
        .def("Initialize", &UInstancedDesignerAttribute::Initialize)
          ;
}