#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAnnouncePenaltyBox()
{
    class_< UWillowSeqAct_ColiseumAnnouncePenaltyBox, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumAnnouncePenaltyBox", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumAnnouncePenaltyBox::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}