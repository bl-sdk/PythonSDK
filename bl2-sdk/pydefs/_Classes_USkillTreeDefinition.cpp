#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillTreeDefinition()
{
    class_< USkillTreeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USkillTreeDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &USkillTreeDefinition::VfTable_IIConstructObject)
        .def_readwrite("Root", &USkillTreeDefinition::Root)
        .def("StaticClass", &USkillTreeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}