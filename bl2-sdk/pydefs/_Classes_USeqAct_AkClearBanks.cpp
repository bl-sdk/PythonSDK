#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkClearBanks()
{
    class_< USeqAct_AkClearBanks, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AkClearBanks", no_init)
        .def("StaticClass", &USeqAct_AkClearBanks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}