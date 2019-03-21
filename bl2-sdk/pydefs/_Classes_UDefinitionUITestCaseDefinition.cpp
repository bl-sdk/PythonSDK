#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDefinitionUITestCaseDefinition(py::object m)
{
    py::class_< UDefinitionUITestCaseDefinition,  UGBXDefinition   >(m, "UDefinitionUITestCaseDefinition")
        .def_readwrite("ConstantFloat", &UDefinitionUITestCaseDefinition::ConstantFloat)
        .def_readwrite("ConstantFloatArray", &UDefinitionUITestCaseDefinition::ConstantFloatArray)
        .def_readwrite("Float", &UDefinitionUITestCaseDefinition::Float)
        .def_readwrite("FloatArray", &UDefinitionUITestCaseDefinition::FloatArray)
        .def_readwrite("EditConstReferencedDefinition", &UDefinitionUITestCaseDefinition::EditConstReferencedDefinition)
        .def_readwrite("EditConstArrayOfReferences", &UDefinitionUITestCaseDefinition::EditConstArrayOfReferences)
        .def_readwrite("ReferencedDefinition", &UDefinitionUITestCaseDefinition::ReferencedDefinition)
        .def_readwrite("ArrayOfReferences", &UDefinitionUITestCaseDefinition::ArrayOfReferences)
        .def("StaticClass", &UDefinitionUITestCaseDefinition::StaticClass, py::return_value_policy::reference)
          ;
}