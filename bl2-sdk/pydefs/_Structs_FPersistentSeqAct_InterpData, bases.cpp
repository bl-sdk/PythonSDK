#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPersistentSeqAct_InterpData()
{
    class_< FPersistentSeqAct_InterpData, bases< FPersistentData >  >("FPersistentSeqAct_InterpData", no_init)
        .def_readwrite("Position", &FPersistentSeqAct_InterpData::Position)
  ;
}