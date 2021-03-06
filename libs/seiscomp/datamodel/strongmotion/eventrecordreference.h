/***************************************************************************
 *   Copyright (C) by ETHZ/SED                                             *
 *                                                                         *
 * This program is free software: you can redistribute it and/or modify    *
 * it under the terms of the GNU LESSER GENERAL PUBLIC LICENSE as published*
 * by the Free Software Foundation, either version 3 of the License, or    *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This software is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU Affero General Public License for more details.                     *
 *                                                                         *
 *   Developed by gempa GmbH                                               *
 ***************************************************************************/

// This file was created by a source code generator.
// Do not modify the contents. Change the definition and run the generator
// again!


#ifndef SEISCOMP_DATAMODEL_STRONGMOTION_EVENTRECORDREFERENCE_H
#define SEISCOMP_DATAMODEL_STRONGMOTION_EVENTRECORDREFERENCE_H


#include <string>
#include <seiscomp/datamodel/realquantity.h>
#include <seiscomp/datamodel/object.h>
#include <seiscomp/core/exceptions.h>
#include <seiscomp/datamodel/strongmotion/api.h>


namespace Seiscomp {
namespace DataModel {
namespace StrongMotion {


DEFINE_SMARTPOINTER(EventRecordReference);

class StrongOriginDescription;


class SC_STRONGMOTION_API EventRecordReference : public Object {
	DECLARE_SC_CLASS(EventRecordReference);
	DECLARE_SERIALIZATION;
	DECLARE_METAOBJECT;

	// ------------------------------------------------------------------
	//  Xstruction
	// ------------------------------------------------------------------
	public:
		//! Constructor
		EventRecordReference();

		//! Copy constructor
		EventRecordReference(const EventRecordReference& other);

		//! Custom constructor
		EventRecordReference(const std::string& recordID);
		EventRecordReference(const std::string& recordID,
		                     const OPT(RealQuantity)& campbellDistance,
		                     const OPT(RealQuantity)& ruptureToStationAzimuth,
		                     const OPT(RealQuantity)& ruptureAreaDistance,
		                     const OPT(RealQuantity)& JoynerBooreDistance,
		                     const OPT(RealQuantity)& closestFaultDistance,
		                     const OPT(double)& preEventLength,
		                     const OPT(double)& postEventLength);

		//! Destructor
		~EventRecordReference();
	

	// ------------------------------------------------------------------
	//  Operators
	// ------------------------------------------------------------------
	public:
		//! Copies the metadata of other to this
		EventRecordReference& operator=(const EventRecordReference& other);
		//! Checks for equality of two objects. Childs objects
		//! are not part of the check.
		bool operator==(const EventRecordReference& other) const;
		bool operator!=(const EventRecordReference& other) const;

		//! Wrapper that calls operator==
		bool equal(const EventRecordReference& other) const;


	// ------------------------------------------------------------------
	//  Setters/Getters
	// ------------------------------------------------------------------
	public:
		void setRecordID(const std::string& recordID);
		const std::string& recordID() const;

		void setCampbellDistance(const OPT(RealQuantity)& campbellDistance);
		RealQuantity& campbellDistance();
		const RealQuantity& campbellDistance() const;

		void setRuptureToStationAzimuth(const OPT(RealQuantity)& ruptureToStationAzimuth);
		RealQuantity& ruptureToStationAzimuth();
		const RealQuantity& ruptureToStationAzimuth() const;

		void setRuptureAreaDistance(const OPT(RealQuantity)& ruptureAreaDistance);
		RealQuantity& ruptureAreaDistance();
		const RealQuantity& ruptureAreaDistance() const;

		void setJoynerBooreDistance(const OPT(RealQuantity)& JoynerBooreDistance);
		RealQuantity& JoynerBooreDistance();
		const RealQuantity& JoynerBooreDistance() const;

		void setClosestFaultDistance(const OPT(RealQuantity)& closestFaultDistance);
		RealQuantity& closestFaultDistance();
		const RealQuantity& closestFaultDistance() const;

		void setPreEventLength(const OPT(double)& preEventLength);
		double preEventLength() const;

		void setPostEventLength(const OPT(double)& postEventLength);
		double postEventLength() const;

	
	// ------------------------------------------------------------------
	//  Public interface
	// ------------------------------------------------------------------
	public:
		StrongOriginDescription* strongOriginDescription() const;

		//! Implement Object interface
		bool assign(Object* other);
		bool attachTo(PublicObject* parent);
		bool detachFrom(PublicObject* parent);
		bool detach();

		//! Creates a clone
		Object* clone() const;

		void accept(Visitor*);


	// ------------------------------------------------------------------
	//  Implementation
	// ------------------------------------------------------------------
	private:
		// Attributes
		std::string _recordID;
		OPT(RealQuantity) _campbellDistance;
		OPT(RealQuantity) _ruptureToStationAzimuth;
		OPT(RealQuantity) _ruptureAreaDistance;
		OPT(RealQuantity) _joynerBooreDistance;
		OPT(RealQuantity) _closestFaultDistance;
		OPT(double) _preEventLength;
		OPT(double) _postEventLength;
};


}
}
}


#endif
