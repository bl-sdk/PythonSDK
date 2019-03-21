#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSwoopAttackData()
{
    class_< FSwoopAttackData >("FSwoopAttackData", no_init)
        .def_readwrite("Distance", &FSwoopAttackData::Distance)
  ;
}