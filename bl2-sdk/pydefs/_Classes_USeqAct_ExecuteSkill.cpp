#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ExecuteSkill()
{
    class_< USeqAct_ExecuteSkill, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ExecuteSkill", no_init)
        .def_readwrite("SkillEffect", &USeqAct_ExecuteSkill::SkillEffect)
        .def("StaticClass", &USeqAct_ExecuteSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventExecuteSkill", &USeqAct_ExecuteSkill::eventExecuteSkill)
        .staticmethod("StaticClass")
  ;
}