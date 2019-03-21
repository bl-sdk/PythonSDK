#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerMember()
{
    class_< FPlayerMember >("FPlayerMember", no_init)
        .def_readwrite("TeamNum", &FPlayerMember::TeamNum)
        .def_readwrite("Skill", &FPlayerMember::Skill)
        .def_readwrite("NetId", &FPlayerMember::NetId)
  ;
}