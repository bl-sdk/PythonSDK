#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCurrentProficiencySkillAttributeContextResolver()
{
    class_< UCurrentProficiencySkillAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UCurrentProficiencySkillAttributeContextResolver", no_init)
        .def("StaticClass", &UCurrentProficiencySkillAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UCurrentProficiencySkillAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}