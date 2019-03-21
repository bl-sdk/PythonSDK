#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDefinitionUITestCaseDefinition()
{
    class_< UDefinitionUITestCaseDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDefinitionUITestCaseDefinition", no_init)
        .def_readwrite("ConstantFloat", &UDefinitionUITestCaseDefinition::ConstantFloat)
        .def_readwrite("ConstantFloatArray", &UDefinitionUITestCaseDefinition::ConstantFloatArray)
        .def_readwrite("Float", &UDefinitionUITestCaseDefinition::Float)
        .def_readwrite("FloatArray", &UDefinitionUITestCaseDefinition::FloatArray)
        .def_readwrite("EditConstReferencedDefinition", &UDefinitionUITestCaseDefinition::EditConstReferencedDefinition)
        .def_readwrite("EditConstArrayOfReferences", &UDefinitionUITestCaseDefinition::EditConstArrayOfReferences)
        .def_readwrite("ReferencedDefinition", &UDefinitionUITestCaseDefinition::ReferencedDefinition)
        .def_readwrite("ArrayOfReferences", &UDefinitionUITestCaseDefinition::ArrayOfReferences)
        .def("StaticClass", &UDefinitionUITestCaseDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}