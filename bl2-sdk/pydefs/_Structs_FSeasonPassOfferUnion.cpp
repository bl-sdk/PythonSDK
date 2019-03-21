#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeasonPassOfferUnion()
{
    class_< FSeasonPassOfferUnion >("FSeasonPassOfferUnion", no_init)
        .def_readwrite("AssociatedSeasonPassOfferId", &FSeasonPassOfferUnion::AssociatedSeasonPassOfferId)
        .def_readwrite("PaidOfferId", &FSeasonPassOfferUnion::PaidOfferId)
        .def_readwrite("FreeOfferId", &FSeasonPassOfferUnion::FreeOfferId)
        .def_readwrite("SeasonPassId", &FSeasonPassOfferUnion::SeasonPassId)
  ;
}