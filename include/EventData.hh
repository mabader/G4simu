#ifndef __PEVENTDATA_H__
#define __PEVENTDATA_H__

#include <string>
#include <vector>

using std::string;
using std::vector;

class EventData
{
public:
	 EventData();
	~EventData();

public:
	void Clear();

public:
	int m_iEventId;								// the event ID
	float m_fTotalEnergyDeposited;				// total energy deposited in the ScintSD
	int m_iNbSteps;								// number of energy depositing steps
	vector<int> *m_pTrackId;					// id of the particle
	vector<int> *m_pParentId;					// id of the parent particle
	vector<int> *m_pCollectionId;					// collection id 
	vector<string> *m_pParticleType;			// type of particle
	vector<string> *m_pParentType;				// type of particle
	vector<string> *m_pCreatorProcess;			// interaction
	vector<string> *m_pDepositingProcess;		// energy depositing process
	vector<float> *m_pEtot;						// energy deposit in each detector 
	vector<float> *m_pX;						// position of the step
	vector<float> *m_pY;
	vector<float> *m_pZ;
	vector<float> *m_pEnergyDeposited; 			// energy deposited in the step
	vector<float> *m_pKineticEnergy;			// particle kinetic energy after the step			
	vector<float> *m_pTime;						// time of the step
	vector<string> *m_pPrimaryParticleType;		// type of particle
	float m_fPrimaryX;							// position of the primary particle
	float m_fPrimaryY;
	float m_fPrimaryZ;	
  float m_fPrimaryE;	
  float m_fPrimaryW;	

};

#endif // __PEVENTDATA_H__

