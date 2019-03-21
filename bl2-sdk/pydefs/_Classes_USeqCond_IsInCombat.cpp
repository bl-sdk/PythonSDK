#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsInCombat()
{
    class_< USeqCond_IsInCombat, bases< USequenceOp >  , boost::noncopyable>("USeqCond_IsInCombat", no_init)
        .def("StaticClass", &USeqCond_IsInCombat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}