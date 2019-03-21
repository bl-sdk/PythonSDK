#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CausePlayerDeath()
{
    class_< USeqAct_CausePlayerDeath, bases< USequenceAction >  , boost::noncopyable>("USeqAct_CausePlayerDeath", no_init)
        .def("StaticClass", &USeqAct_CausePlayerDeath::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}