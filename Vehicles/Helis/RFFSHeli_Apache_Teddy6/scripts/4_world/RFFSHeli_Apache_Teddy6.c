class RFFSHeli_Apache_Teddy6 extends RFFSHeli_Apache
{
	void RFFSHeli_Apache_Teddy6() 
	{
		c_heli_wreck_model = "RFFSHeli_Apache_Teddy6_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Apache;
			if ( Class.CastTo(entity_Apache, this) )
			{
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Driverdoor_Teddy6" );
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Codriverdoor_Teddy6" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Apache_Teddy6_Wreck extends RFFSHeli_Apache_Wreck {}