#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillAttributeContextResolver()
{
    class_< USkillAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("USkillAttributeContextResolver", no_init)
        .def_readwrite("AssociatedSkill", &USkillAttributeContextResolver::AssociatedSkill)
        .def_readwrite("AssociatedSkillPathName", &USkillAttributeContextResolver::AssociatedSkillPathName)
        .def("StaticClass", &USkillAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}