#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerSkillAttributeValueResolver()
{
    class_< UPlayerSkillAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UPlayerSkillAttributeValueResolver", no_init)
        .def_readwrite("AssociatedSkill", &UPlayerSkillAttributeValueResolver::AssociatedSkill)
        .def("StaticClass", &UPlayerSkillAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}