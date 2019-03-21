#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurrentPlayerMet()
{
    class_< FCurrentPlayerMet >("FCurrentPlayerMet", no_init)
        .def_readwrite("TeamNum", &FCurrentPlayerMet::TeamNum)
        .def_readwrite("Skill", &FCurrentPlayerMet::Skill)
        .def_readwrite("NetId", &FCurrentPlayerMet::NetId)
  ;
}