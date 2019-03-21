#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DiscardInventory()
{
    class_< USeqAct_DiscardInventory, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DiscardInventory", no_init)
        .def("StaticClass", &USeqAct_DiscardInventory::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnActivated", &USeqAct_DiscardInventory::eventOnActivated)
        .staticmethod("StaticClass")
  ;
}