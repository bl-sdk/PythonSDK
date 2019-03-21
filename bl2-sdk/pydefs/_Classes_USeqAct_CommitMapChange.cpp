#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CommitMapChange()
{
    class_< USeqAct_CommitMapChange, bases< USequenceAction >  , boost::noncopyable>("USeqAct_CommitMapChange", no_init)
        .def("StaticClass", &USeqAct_CommitMapChange::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}